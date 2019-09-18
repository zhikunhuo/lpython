from lxml import etree
text = '''
<div>
<ul>
<li class="li li-first" name="item"><a href="link1.html">first item</a></li>
<li class="li-first"><a href="link1.html">1111 item</a></li>
<li class="item-1"><a href="link2.html">second item</a></li>
<li class="item-inactive"><a href="link3.html">third item</a></li>
<li class="item-1"><a href="link4.html">fourth item</a></li>
<li class="item-0"><a href="link5.html">fourth item</a>
</ul>
</div>
'''

html = etree.HTML(text)
result = html.xpath('//li[contains(@class, "li-first") and @name="item"]/a/text()')
print(result)