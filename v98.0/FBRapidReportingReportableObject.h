/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemRapidReportingPrompt;

@interface FBRapidReportingReportableObject : NSObject {

	NSString* _fbid;
	FBMemRapidReportingPrompt* _reportingPrompt;

}

@property (nonatomic,copy,readonly) NSString * fbid;                                     //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) FBMemRapidReportingPrompt * reportingPrompt;              //@synthesize reportingPrompt=_reportingPrompt - In the implementation block
+(id)reportableObjectWithUserID:(id)arg1 ;
+(id)reportableObjectWithNode:(id)arg1 ;
+(id)reportableObjectWithFeedUnit:(id)arg1 ;
-(NSString *)fbid;
-(FBMemRapidReportingPrompt *)reportingPrompt;
@end
