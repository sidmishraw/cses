#
# sjava.py
# @author Sidharth Mishra
# @website sidmishraw.github.io
# @description Sidharth's java
# @created 2019-07-21T16:43:32.186Z-07:00
# @last-modified 2019-07-21T20:32:50.008Z-07:00
#

import sys
import re

if len(sys.argv) < 2:
    print("Usage: ./gen.fish <cpp-file-name> <java-file-name>")
    exit(1)
    
filename = sys.argv[1]

x = []
for l in sys.stdin:
    if re.match("^#", l) is None:
        x.append(l)
with open(filename, "w") as f:
    for l in x:
        f.write(l)
