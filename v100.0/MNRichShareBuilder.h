/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSURL;

@interface MNRichShareBuilder : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _attribution;
	NSURL* _imageURL;
	NSString* _href;
	NSURL* _deepLinkURL;
	NSURL* _attributionDeepLinkURL;
	CGSize _imageSize;
	BOOL _shouldUseLargeModes;

}
+(id)richShare;
+(id)richShareFromExistingRichShare:(id)arg1 ;
-(id)withHref:(id)arg1 ;
-(id)withBody:(id)arg1 ;
-(id)withAttribution:(id)arg1 ;
-(id)withImageURL:(id)arg1 ;
-(id)withDeepLinkURL:(id)arg1 ;
-(id)withAttributionDeepLinkURL:(id)arg1 ;
-(id)withImageSize:(CGSize)arg1 ;
-(id)withShouldUseLargeModes:(BOOL)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

