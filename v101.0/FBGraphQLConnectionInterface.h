/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionInterface <NSObject>
@required
-(void)addConnectionListener:(id)arg1;
-(void)registerEdgeFilter:(id)arg1 withPriority:(long long)arg2;
-(void)asynchronouslyApplyStateModification:(id)arg1 completion:(/*^block*/id)arg2;
-(id)synchronouslyApplyStateModification:(id)arg1;
-(id)addEdgesFromConnectionPage:(id)arg1 loadedAtLocation:(id)arg2 userInfo:(id)arg3;
-(void)removeConnectionListener:(id)arg1;
-(id)connectionState;

@end
