/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface _CKComponentMemoizerImpl : NSObject {

	_CKComponentMemoizerImpl* _next;
	unordered_multimap<CKMemoizationKey, CKComponent *, std::__1::hash<CKMemoizationKey>, std::__1::equal_to<CKMemoizationKey>, std::__1::allocator<std::__1::pair<const CKMemoizationKey, CKComponent *> > >* componentCache_;
	unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::__1::allocator<std::__1::pair<const CKLayoutMemoizationKey, CKComponentLayout> > >* layoutCache_;

}
+(id)currentMemoizer;
+(void)setCurrentMemoizer:(id)arg1 ;
-(id)dequeueComponentForKey:(CKMemoizationKey*)arg1 ;
-(void)enqueueComponent:(id)arg1 forKey:(CKMemoizationKey*)arg2 ;
-(CKComponentLayout*)cachedLayout:(id)arg1 thatFits:(CKSizeRange)arg2 restrictedToSize:(CKComponentSize)arg3 parentSize:(CGSize)arg4 ;
-(id)next;
@end

