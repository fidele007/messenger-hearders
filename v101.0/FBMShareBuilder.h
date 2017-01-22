/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSURL, NSArray;

@interface FBMShareBuilder : NSObject {

	NSString* _title;
	NSString* _caption;
	NSString* _desc;
	NSString* _src;
	NSString* _imageSrc;
	NSString* _href;
	NSString* _robotextJSONString;
	NSDictionary* _robotextTagsJSON;
	NSURL* _deepLinkURL;
	NSString* _attribution;
	NSURL* _attributionDeepLinkURL;
	NSArray* _additionalImageSrcs;
	int _type;

}
+(id)shareFromExistingShare:(id)arg1 ;
+(id)share;
-(id)withHref:(id)arg1 ;
-(id)withType:(int)arg1 ;
-(id)withAttribution:(id)arg1 ;
-(id)withDeepLinkURL:(id)arg1 ;
-(id)withAttributionDeepLinkURL:(id)arg1 ;
-(id)withCaption:(id)arg1 ;
-(id)withDesc:(id)arg1 ;
-(id)withSrc:(id)arg1 ;
-(id)withImageSrc:(id)arg1 ;
-(id)withRobotextJSONString:(id)arg1 ;
-(id)withRobotextTagsJSON:(id)arg1 ;
-(id)withAdditionalImageSrcs:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end
