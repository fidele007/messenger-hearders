/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExperimentCache.h>

@class FBExperimentManager;

@interface FBFeedComponentExperimentCache : NSObject <FBExperimentCache> {

	FBExperimentManager* _experimentManager;
	unordered_map<__unsafe_unretained Class, FBFeedComponentExperimentCacheContext, FB::HashFunctor<__unsafe_unretained Class>, FB::EqualFunctor<__unsafe_unretained Class>, std::__1::allocator<std::__1::pair<const __unsafe_unretained Class, FBFeedComponentExperimentCacheContext> > >* _experimentMap;

}
-(BOOL)isGKEnabled:(id)arg1 ;
-(id)autoExposedExperimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_tRef)arg1 ;
-(id)experimentContextWithClass:(Class)arg1 ;
-(id)initWithExperimentManager:(id)arg1 experiments:(const vector<__unsafe_unretained Class, std::__1::allocator<__unsafe_unretained Class> >*)arg2 ;
@end
