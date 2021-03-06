/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBJewelNetworkDataSource;
@class FBJewelState, FBJewelController;

@interface FBJewelManager : NSObject {

	id<FBJewelNetworkDataSource> _networkDataSource;
	FBJewelState* _jewelState;
	FBJewelController* _jewelController;

}

@property (nonatomic,readonly) id<FBJewelNetworkDataSource> networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,readonly) FBJewelState * jewelState;                                   //@synthesize jewelState=_jewelState - In the implementation block
@property (assign,nonatomic,__weak) FBJewelController * jewelController;                    //@synthesize jewelController=_jewelController - In the implementation block
-(FBJewelController *)jewelController;
-(void)setJewelController:(FBJewelController *)arg1 ;
-(id)initWithNetworkDataSource:(id)arg1 ;
-(id<FBJewelNetworkDataSource>)networkDataSource;
-(FBJewelState *)jewelState;
@end

