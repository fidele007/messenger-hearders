/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSArray, NSMutableArray, NSMutableAttributedString, NSDictionary, NSURL, FBMemEntityAtRange, NSString;

@interface FBFeedMessageMarkdownParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	NSArray* _entityAtRanges;
	NSMutableArray* _elementNameStack;
	NSMutableAttributedString* _attributedString;
	NSDictionary* _stylesheet;
	long long _orderedListNumber;
	NSURL* _anchorURL;
	FBMemEntityAtRange* _currentEntityAtRange;
	long long _currentEntityStartLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringForMarkdownWithEntities:(id)arg1 withStylesheet:(id)arg2 ;
-(id)initWithHtml:(id)arg1 entityRanges:(id)arg2 stylesheet:(id)arg3 ;
-(id)currentStringAttributes;
-(BOOL)shouldAddParagraphSeparatorAfterElementName:(id)arg1 ;
-(BOOL)isElementNameContentContaining:(id)arg1 ;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)attributedString;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

