/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, BFAppLink;

@interface BFURL : NSObject {

	NSURL* _targetURL;
	NSDictionary* _targetQueryParameters;
	NSDictionary* _appLinkData;
	NSDictionary* _appLinkExtras;
	BFAppLink* _appLinkReferer;
	NSURL* _inputURL;
	NSDictionary* _inputQueryParameters;

}

@property (nonatomic,readonly) NSURL * targetURL;                                 //@synthesize targetURL=_targetURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * targetQueryParameters;              //@synthesize targetQueryParameters=_targetQueryParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkData;                        //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkExtras;                      //@synthesize appLinkExtras=_appLinkExtras - In the implementation block
@property (nonatomic,readonly) BFAppLink * appLinkReferer;                        //@synthesize appLinkReferer=_appLinkReferer - In the implementation block
@property (nonatomic,readonly) NSURL * inputURL;                                  //@synthesize inputURL=_inputURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputQueryParameters;               //@synthesize inputQueryParameters=_inputQueryParameters - In the implementation block
+(id)URLForRenderBackToReferrerBarURL:(id)arg1 ;
+(id)queryParametersForURL:(id)arg1 ;
+(id)decodeURLString:(id)arg1 ;
+(id)URLWithURL:(id)arg1 ;
+(id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2 ;
-(NSDictionary *)appLinkData;
-(BFAppLink *)appLinkReferer;
-(id)initWithURL:(id)arg1 forOpenInboundURL:(BOOL)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(BOOL)arg4 ;
-(NSDictionary *)targetQueryParameters;
-(NSDictionary *)appLinkExtras;
-(NSDictionary *)inputQueryParameters;
-(NSURL *)targetURL;
-(NSURL *)inputURL;
@end

