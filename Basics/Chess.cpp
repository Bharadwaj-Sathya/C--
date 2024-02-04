#include <SFML/Graphics.hpp>
#include <iostream>

class ChessGame {
public:
    ChessGame() {
        window.create(sf::VideoMode(800, 800), "Chess Game");
        loadTextures();
        initializeBoard();
    }

    void run() {
        while (window.isOpen()) {
            handleEvents();
            update();
            render();
        }
    }

private:
    sf::RenderWindow window;
    sf::Texture boardTexture;
    sf::Sprite boardSprite;
    sf::Texture piecesTexture;
    sf::Sprite piecesSprite;

    int board[8][8];

    // Load textures for the chessboard and pieces
    void loadTextures() {
        if (!boardTexture.loadFromFile("assets/board.png") ||
            !piecesTexture.loadFromFile("assets/pieces.png")) {
            std::cerr << "Error loading textures\n";
            std::exit(1);
        }

        boardSprite.setTexture(boardTexture);
        piecesSprite.setTexture(piecesTexture);
    }

    // Initialize the chessboard with pieces
    void initializeBoard() {
        // Board configuration (0 for empty, 1 for pawn, 2 for rook, etc.)
        int initialBoard[8][8] = {
            {2, 1, 0, 0, 0, 0, 1, 2},
            {3, 1, 0, 0, 0, 0, 1, 3},
            {4, 1, 0, 0, 0, 0, 1, 4},
            {5, 1, 0, 0, 0, 0, 1, 5},
            {6, 1, 0, 0, 0, 0, 1, 6},
            {4, 1, 0, 0, 0, 0, 1, 4},
            {3, 1, 0, 0, 0, 0, 1, 3},
            {2, 1, 0, 0, 0, 0, 1, 2}
        };

        // Copy the initial board to the game board
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[i][j] = initialBoard[i][j];
            }
        }
    }

    // Handle events (keyboard/mouse input)
    void handleEvents() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    // Update game logic
    void update() {
        // Update game state based on user input or other events
        // Add logic for piece movement, checking for checkmate, etc.
    }

    // Render the chessboard and pieces
    void render() {
        window.clear();

        // Draw chessboard
        window.draw(boardSprite);

        // Draw pieces based on the board configuration
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] != 0) {
                    piecesSprite.setTextureRect(sf::IntRect((board[i][j] - 1) * 64, 0, 64, 64));
                    piecesSprite.setPosition(j * 100, i * 100);
                    window.draw(piecesSprite);
                }
            }
        }

        window.display();
    }
};

int main() {
    ChessGame chessGame;
    chessGame.run();

    return 0;
}
