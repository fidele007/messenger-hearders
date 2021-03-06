/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNProductItemDataFetcherDelegate;
@class FBUserSession;

@interface MNProductItemDataFetcher : NSObject {

	FBUserSession* _session;
	id<MNProductItemDataFetcherDelegate> _delegate;

}
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)fetchBookingRequestsCountWithPageId:(id)arg1 firstCount:(unsigned long long)arg2 ;
-(void)_fetchFailedWithError:(id)arg1 ;
-(void)_fetchSucceededWithData:(id)arg1 ;
@end

