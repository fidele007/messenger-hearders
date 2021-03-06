/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSDictionary;

@interface FBSectionComponentDataSourceModel : NSObject {

	id<NSObject> _model;
	id<NSObject> _context;
	/*^block*/id _componentBlock;
	NSDictionary* _accessoryModel;

}

@property (nonatomic,copy,readonly) NSDictionary * accessoryModel;              //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id componentBlock;                          //@synthesize componentBlock=_componentBlock - In the implementation block
-(NSDictionary *)accessoryModel;
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 ;
-(id)componentBlock;
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 accessoryModel:(id)arg4 ;
-(id)description;
-(id<NSObject>)context;
-(id<NSObject>)model;
@end

