/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBCache : NSObject {

	Cache<NSObject *, NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *> >* _imp;
	mutex _impLock;
	BOOL _enabled;
	BOOL _shouldCompactOnMemoryWarning;
	BOOL _shouldRemoveAllObjectsWhenEnteringBackground;
	double _compactionFactorForMemoryWarning;

}

@property (nonatomic,readonly) unsigned long long maximumCost; 
@property (assign,nonatomic) double compactionFactor; 
@property (assign,nonatomic) BOOL shouldCompactOnMemoryWarning;                              //@synthesize shouldCompactOnMemoryWarning=_shouldCompactOnMemoryWarning - In the implementation block
@property (nonatomic,readonly) double compactionFactorForMemoryWarning;                      //@synthesize compactionFactorForMemoryWarning=_compactionFactorForMemoryWarning - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveAllObjectsWhenEnteringBackground;              //@synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground - In the implementation block
+(void)setEnableAggressiveMemoryCompaction;
-(id)initWithMaximumCost:(unsigned long long)arg1 ;
-(id)initWithMaximumCost:(unsigned long long)arg1 cacheStrategy:(unsigned long long)arg2 ;
-(void)setShouldRemoveAllObjectsWhenEnteringBackground:(BOOL)arg1 ;
-(unsigned long long)maximumCost;
-(void)setShouldCompactOnMemoryWarning:(BOOL)arg1 ;
-(void)setCompactionFactor:(double)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ;
-(id)initWithMaximumCost:(unsigned long long)arg1 cacheStrategy:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithMaximumCost:(unsigned long long)arg1 cacheStrategy:(unsigned long long)arg2 options:(id)arg3 compactionFactorForMemoryWarning:(double)arg4 ;
-(BOOL)shouldCompactOnMemoryWarning;
-(void)compactOnMemoryWarning;
-(BOOL)shouldRemoveAllObjectsWhenEnteringBackground;
-(void)disableAndDrain;
-(void)compactWithFactor:(double)arg1 ;
-(vector<std::__1::pair<NSObject *const, NSObject *>, std::__1::allocator<std::__1::pair<NSObject *const, NSObject *> > >*)_cacheCopy;
-(double)compactionFactor;
-(unsigned long long)totalCost;
-(double)compactionFactorForMemoryWarning;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allObjects;
-(void)enable;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)compact;
@end

