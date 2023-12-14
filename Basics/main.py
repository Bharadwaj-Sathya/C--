val = [
    {
        'PR number': 123,
        'PR url': ".com",
        'PR target branch': "branch"
    },
    {
        'PR number': 1,
        'PR url': ".m",
        'PR target branch': "branc\h"
    },
    {
        'PR number': 23,
        'PR url': ".cm",
        'PR target branch': "brch"
    }
]


for i in val:
    print(i['PR number'])
