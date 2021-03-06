/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemRapidReportingPrompt, FBMemSubmitRapidReportResponsePayload;

@interface FBRapidReportingModel : NSObject {

	int _status;
	int _submitStatus;
	FBMemRapidReportingPrompt* _metadata;
	FBMemSubmitRapidReportResponsePayload* _submitPayload;

}

@property (nonatomic,readonly) int status;                                                              //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) FBMemRapidReportingPrompt * metadata;                               //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) int submitStatus;                                                        //@synthesize submitStatus=_submitStatus - In the implementation block
@property (nonatomic,copy,readonly) FBMemSubmitRapidReportResponsePayload * submitPayload;              //@synthesize submitPayload=_submitPayload - In the implementation block
-(id)initWithStatus:(int)arg1 metadata:(id)arg2 submitStatus:(int)arg3 confirmationPrompt:(id)arg4 ;
-(int)submitStatus;
-(FBMemSubmitRapidReportResponsePayload *)submitPayload;
-(int)status;
-(FBMemRapidReportingPrompt *)metadata;
@end

