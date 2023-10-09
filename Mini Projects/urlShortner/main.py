from urllib.parse import urlencode
from urllib.request import urlopen
import sys

def make_tiny(url):
    request_url = f'http://tinyurl.com/api-create.php?{urlencode({"url": url})}'
    with urlopen(request_url) as response:
        return response.read().decode('utf-8')

def main():
    for tinyurl in map(make_tiny, sys.argv[1:]):
        print(tinyurl)

if __name__ == '__main__':
    main()
