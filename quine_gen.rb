#!/usr/bin/env ruby

File.open(ARGV[0]).read.each_byte do |b| print "#{b}, " end
print "\n"
