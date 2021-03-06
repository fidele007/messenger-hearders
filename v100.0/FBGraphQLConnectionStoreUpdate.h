/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionStoreStateModifying.h>

@class NSString;

@interface FBGraphQLConnectionStoreUpdate : NSObject <FBGraphQLConnectionStoreStateModifying> {

	map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >* _updateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(id)transitionsFromState:(id)arg1 ;
-(id)initWithUpdateMap:(map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >*)arg1 ;
-(const map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >*)updateMap;
-(NSString *)description;
@end

