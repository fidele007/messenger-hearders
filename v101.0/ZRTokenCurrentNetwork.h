/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ZRTokenCurrentNetwork : NSObject {

	NSDictionary* _lastKnownNetworkIdentifier;

}

@property (copy) NSDictionary * lastKnownNetworkIdentifier;              //@synthesize lastKnownNetworkIdentifier=_lastKnownNetworkIdentifier - In the implementation block
+(id)_networkIdentifierForReachability:(id)arg1 ;
-(NSDictionary *)lastKnownNetworkIdentifier;
-(void)setLastKnownNetworkIdentifier:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)reachabilityChanged:(id)arg1 ;
-(id)initWithReachability:(id)arg1 ;
@end

