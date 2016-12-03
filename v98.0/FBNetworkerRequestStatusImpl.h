/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestStatus.h>

@protocol FBHttpRequestSummary;
@class NSHTTPURLResponse;

@interface FBNetworkerRequestStatusImpl : NSObject <FBNetworkerRequestStatus> {

	id<FBHttpRequestSummary> _status;
	BOOL _cancelled;
	BOOL _complete;

}

@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) BOOL wasCancelled; 
@property (nonatomic,readonly) unsigned long long attempts; 
@property (nonatomic,readonly) double requestAddTime; 
@property (nonatomic,readonly) double requestBeginTime; 
@property (nonatomic,readonly) double requestEndTime; 
@property (nonatomic,readonly) double responseBeginTime; 
@property (nonatomic,readonly) double responseEndTime; 
@property (nonatomic,readonly) unsigned long long bytesUp; 
@property (nonatomic,readonly) unsigned long long bytesDownUncompressed; 
@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse; 
@property (nonatomic,readonly) BOOL isPushRequest; 
-(double)requestBeginTime;
-(double)requestAddTime;
-(double)responseBeginTime;
-(unsigned long long)attempts;
-(unsigned long long)bytesDownUncompressed;
-(BOOL)isPushRequest;
-(unsigned long long)bytesUp;
-(id)initWithHttpSummary:(id)arg1 ;
-(id)initCancelledWithHttpSummary:(id)arg1 ;
-(id)initFinalSuccessWithHttpSummary:(id)arg1 ;
-(id)initWithHttpSummary:(id)arg1 isComplete:(BOOL)arg2 wasCancelled:(BOOL)arg3 ;
-(id)innerStatus;
-(double)requestEndTime;
-(id)description;
-(double)responseEndTime;
-(BOOL)isComplete;
-(BOOL)wasCancelled;
-(NSHTTPURLResponse *)httpResponse;
@end
