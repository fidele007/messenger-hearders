/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionInterface <NSObject>
@required
-(id)synchronouslyApplyStateModification:(id)arg1;
-(void)addConnectionListener:(id)arg1;
-(void)asynchronouslyApplyStateModification:(id)arg1 completion:(/*^block*/id)arg2;
-(id)addEdgesFromConnectionPage:(id)arg1 loadedAtLocation:(id)arg2 userInfo:(id)arg3;
-(void)removeConnectionListener:(id)arg1;
-(void)addConnectionStateChangeListener:(id)arg1;
-(void)removeConnectionStateChangeListener:(id)arg1;
-(void)registerEdgeFilter:(id)arg1 withPriority:(long long)arg2;
-(id)connectionState;

@end

