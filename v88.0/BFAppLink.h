/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface BFAppLink : NSObject {

	BOOL _backToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;

}

@property (nonatomic,retain) NSURL * sourceURL;                                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSArray * targets;                                          //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                           //@synthesize webURL=_webURL - In the implementation block
@property (assign,getter=isBackToReferrer,nonatomic) BOOL backToReferrer;              //@synthesize backToReferrer=_backToReferrer - In the implementation block
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 ;
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(BOOL)arg4 ;
-(id)initWithIsBackToReferrer:(BOOL)arg1 ;
-(BOOL)isBackToReferrer;
-(void)setBackToReferrer:(BOOL)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setTargets:(NSArray *)arg1 ;
-(NSArray *)targets;
@end

