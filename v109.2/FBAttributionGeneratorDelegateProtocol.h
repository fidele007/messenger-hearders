/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAttributionGeneratorDelegateProtocol <NSObject,NSCoding>
@required
-(void)attributionAlreadyHappenedForStoreEntity:(id)arg1 entityLocations:(id)arg2 userSession:(id)arg3;
-(void)attributionDidHappenForStoreEntity:(id)arg1 entityLocations:(id)arg2 pollCount:(int)arg3 userSession:(id)arg4;
-(void)attributionDidFailForStoreEntity:(id)arg1 exception:(id)arg2;
-(void)addToLogExtra:(id)arg1;

@end

