/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRapidReportingAdditionalDataUploader.h>

@protocol MNSecureThreadReportingFlowReading;
@class NSString;

@interface MNReportingAdditionalDataUploader : NSObject <FBRapidReportingAdditionalDataUploader> {

	id<MNSecureThreadReportingFlowReading> _secureThreadService;
	NSString* _otherUserFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSecureThreadService:(id)arg1 otherUserFBID:(id)arg2 ;
-(void)performUploadWithSRTJobID:(id)arg1 promptNodeToken:(id)arg2 session:(id)arg3 onSuccess:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
@end

