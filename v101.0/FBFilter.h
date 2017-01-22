/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFilterContext, NSDictionary;

@interface FBFilter : NSObject {

	FBFilterContext* _filterContext;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) NSDictionary * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) FBFilterContext * filterContext;              //@synthesize filterContext=_filterContext - In the implementation block
-(FBFilterContext *)filterContext;
-(void)processCommand:(id)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB33)arg3 ;
-(void)setFilterContext:(FBFilterContext *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end
