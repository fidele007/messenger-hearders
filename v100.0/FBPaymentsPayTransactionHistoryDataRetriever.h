/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsListDataRetrieving.h>

@class FBUserSession, NSString;

@interface FBPaymentsPayTransactionHistoryDataRetriever : NSObject <FBPaymentsListDataRetrieving> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handleLoadDataSuccessResponse:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadDataAfterCursor:(id)arg1 limit:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

