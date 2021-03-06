/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphStoreObjectFactory.h>

@class NSString;

@interface FBMemModelObjectFactory : NSObject <FBGraphStoreObjectFactory> {

	const NodeFactory* _nodeFactory;
	const GeneratedGraphSchema* _schema;
	const GraphQL1Schema* _graphQL1Schema;
	shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>* _defaultTreeShapeResolver;
	unique_ptr<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory, std::__1::default_delete<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory> >* _strategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const GeneratedGraphSchema*)graphSchema;
-(id)initWithNodeFactory:(const NodeFactory*)arg1 typeHelper:(const TypeHelper*)arg2 graphSchema:(const GeneratedGraphSchema*)arg3 graphQL1Schema:(const GraphQL1Schema*)arg4 ;
-(id)allocFromTypeId:(unsigned)arg1 ;
-(id)newFromRecordAndSnapshot:(unique_ptr<facebook::mobile::FBMemModel::detail::RecordAndSnapshot, std::__1::default_delete<facebook::mobile::FBMemModel::detail::RecordAndSnapshot> >*)arg1 ;
-(const PlatformGraphQLFactory*)parsingStrategy;
-(id)newFromTree:(const shared_ptr<facebook::mobile::graphstore::Tree>*)arg1 ;
-(const GraphQL1Schema*)graphQL1Schema;
-(const NodeFactory*)nodeFactory;
-(shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>*)defaultTreeShapeResolver;
@end

