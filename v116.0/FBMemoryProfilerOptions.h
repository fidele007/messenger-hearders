/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBMemoryProfilerOptions : NSObject {

	unsigned long long _sortingMode;
	unsigned long long _sortingOrder;
	NSArray* _plugins;

}

@property (nonatomic,readonly) unsigned long long sortingMode;               //@synthesize sortingMode=_sortingMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sortingOrder;              //@synthesize sortingOrder=_sortingOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * plugins;                       //@synthesize plugins=_plugins - In the implementation block
-(unsigned long long)sortingOrder;
-(id)initWithSortingMode:(unsigned long long)arg1 sortingOrder:(unsigned long long)arg2 plugins:(id)arg3 ;
-(unsigned long long)sortingMode;
-(NSArray *)plugins;
@end

