/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * StoreApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_StoreApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_StoreApi_H_


#include "../ApiClient.h"

#include "Order.h"
#include <map>
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  StoreApi 
{
public:

    StoreApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~StoreApi();

    /// <summary>
    /// Delete purchase order by ID
    /// </summary>
    /// <remarks>
    /// For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors
    /// </remarks>
    /// <param name="orderId">ID of the order that needs to be deleted</param>
    pplx::task<void> deleteOrder(
        utility::string_t orderId
    );
    /// <summary>
    /// Returns pet inventories by status
    /// </summary>
    /// <remarks>
    /// Returns a map of status codes to quantities
    /// </remarks>
    pplx::task<std::map<utility::string_t, int32_t>> getInventory(
    );
    /// <summary>
    /// Find purchase order by ID
    /// </summary>
    /// <remarks>
    /// For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generated exceptions
    /// </remarks>
    /// <param name="orderId">ID of pet that needs to be fetched</param>
    pplx::task<std::shared_ptr<Order>> getOrderById(
        int64_t orderId
    );
    /// <summary>
    /// Place an order for a pet
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="order">order placed for purchasing the pet</param>
    pplx::task<std::shared_ptr<Order>> placeOrder(
        std::shared_ptr<Order> order
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_StoreApi_H_ */

