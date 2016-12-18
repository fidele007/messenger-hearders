/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBFilterCollection : NSObject {

	NSArray* _filters;
	NSArray* _hiddenFilters;
	BOOL _compiled;
	recursive_mutex _lock;

}

@property (nonatomic,copy,readonly) NSArray * filters;                     //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filtersWithLux; 
+(id)createFilterInstances:(id)arg1 ;
+(id)sharedInstance;
-(id)getFilterWithID:(long long)arg1 ;
-(NSArray *)filtersWithLux;
-(void)compileAll:(id)arg1 ;
-(void)invalidateShaderCompiles;
-(id)init;
-(NSArray *)filters;
@end
