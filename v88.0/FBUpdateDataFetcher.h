/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUpdateDataFetcherDelegate;
@interface FBUpdateDataFetcher : NSObject {

	id<FBUpdateDataFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBUpdateDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<FBUpdateDataFetcherDelegate>)arg1 ;
-(id<FBUpdateDataFetcherDelegate>)delegate;
-(unsigned long long)status;
-(void)fetchData;
@end

