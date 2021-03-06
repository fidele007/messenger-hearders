/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZRBaseDataFetcher.h>
#import <Messenger/FBRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol ZRBannerDataFetcherDelegate;
@class ZRTokenData, NSString, NSDictionary;

@interface ZRBannerDataFetcher : ZRBaseDataFetcher <FBRequestDelegate, FBClassProvidable> {

	id<ZRBannerDataFetcherDelegate> _delegate;
	ZRTokenData* _zeroTokenData;
	NSString* _megaphoneCategory;
	NSDictionary* _response;
	ZRTokenData* _savedTokenData;

}

@property (nonatomic,retain) NSDictionary * response;                               //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) ZRTokenData * savedTokenData;                          //@synthesize savedTokenData=_savedTokenData - In the implementation block
@property (assign,nonatomic) id<ZRBannerDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ZRTokenData * zeroTokenData;                           //@synthesize zeroTokenData=_zeroTokenData - In the implementation block
@property (nonatomic,retain) NSString * megaphoneCategory;                          //@synthesize megaphoneCategory=_megaphoneCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformResult:(id)arg1 tokenData:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(NSString *)megaphoneCategory;
-(id)initWithFacebook:(id)arg1 errorHandler:(id)arg2 ;
-(void)setSavedTokenData:(ZRTokenData *)arg1 ;
-(void)doSend;
-(ZRTokenData *)zeroTokenData;
-(void)setZeroTokenData:(ZRTokenData *)arg1 ;
-(void)setMegaphoneCategory:(NSString *)arg1 ;
-(ZRTokenData *)savedTokenData;
-(void)setDelegate:(id<ZRBannerDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<ZRBannerDataFetcherDelegate>)delegate;
-(NSDictionary *)response;
-(void)setResponse:(NSDictionary *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didSucceed;
@end

